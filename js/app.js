var app = new Vue({
    el: '#app',
    data: {
         db: (() => {
             var url = `${location.protocol}//${location.host}/headers/`;
             return url;
         })(),
        versions: [
            "12.1.2",
            "11.3.1",
            "10.2",
            "10.0",
            "9.3",
            "9.0",
            "8.4",
            "8.1",
            "7.0",
            "6.0",
            "5.1"
        ],
        current_version: 0,
        files: [],
        search: "",
        page_title: `iOS`,
        search_results: [],
        showingFile: false,
        showFile: {},
        title: "Search iOS Headers"
    },
    methods: {
        isSearch() {
            if(this.search.length > 0) {
                return true;
            } else {
                return false;
            }
        },
        log(str) {
            console.trace('[HeaderFinder]', str);
        },
        getEndpoint(url, options = {method: "GET"}, type = 1) {
            return new Promise((resolve, reject) => {
              fetch(`${this.db}${url}`, options).then((response) => {
                if (response.status !== 200) {
                  if(response.status == 1001) {
                    resolve(response);
                    return;
                  } else {
                    this.log(`Looks like there was a problem. Status Code: ${response.status}`);
                    reject(response.status);
                    return;
                  }
                };
                // Examine the text in the response
                if(type !== 1) {
                    response.text().then((data) => resolve(data));
                } else {
                    response.json().then((data) => resolve(data));
                }
                
              }).catch((err) => reject(err));
            });
          },
        init() {
            var version = this.versions[this.current_version];
            this.log(`Loading ${version} from DB`);
            this.getEndpoint(`${version}.json`).then((data) => {
                this.files = data[version];
               this.search = "";
               this.page_title = `iOS ${version}`
                this.log(data);
            }).catch((e) => {
          ///      alert("Failed to load files! Contact us!");
                this.log(e);
            });
        },
        loadVersion(i) {
            this.files = [];
            this.current_version = i;
            this.init();
        },
        searchFile() {
            this.search_results = [];
            if(this.search == "") {
                this.search_results = [];
                this.log(`Turned off search`)
            } else {
                this.log(`Searching for ${this.search}`)

                var search = this.search;
                this.page_title = `Searching for ${search}`;

                this.search_results = [];
                this.files.forEach((file, i) => {
                    if(file.toLowerCase().includes(search.toLowerCase())) {
                        this.search_results.push(i);
                    }
                })

            

            }
        },
        loadFile(i) {
            var file = this.files[i];
            var version = this.versions[this.current_version];
            this.showingFile = true;
            this.showFile = {
                title: file,
                version: version,
                data: "Loading file..."
            }
            this.getEndpoint(`${version}/${file}`, null, "text").then((data) => {

                ((done) => {
                    this.showFile = {
                        title: file,
                        version:version,
                        data: data
                    }
                    setTimeout((params) => {
                        done();
                    }, 500)
                   // done()
                })(() => {
                    hljs.highlightBlock(document.querySelectorAll("pre code")[0])
                }) 
                
               // console.log(data);

            }).catch((e) => {
                console.log(e);
            });
            
        },
        closeFile() {
            this.showingFile = false;
            this.showFile = {};
        }
    }
  });
  
  app.init();