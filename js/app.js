var app = new Vue({
    el: '#app',
    data: {
        db: 'http://localhost/headers/',
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
        search_results: []
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
        getEndpoint(url, options = {method: "GET"}) {
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
                response.json().then((data) => resolve(data));
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
                this.files.forEach((file) => {
                    if(file.search(search) !== -1) {
                        this.search_results.push(file);
                    }
                })

                /*var sValue = document.getElementById("search").value;
                console.log(sValue);
                document.getElementById("iosVersion").innerHTML = 'Searching for "' + sValue + '"';

                var headerStrings = document.getElementsByClassName("headerstr");
                for (var i = 0; i < headerStrings.length; i++) {
                    if (!headerStrings[i].innerHTML.toLowerCase().includes(sValue.toLowerCase())) {
                        headerStrings[i].parentElement.parentElement.parentElement.parentElement.parentElement.style.display = "none";
                    } else {
                        headerStrings[i].parentElement.parentElement.parentElement.parentElement.parentElement.style.display = "block";
                    }
                }*/

            }
        }
    }
  });
  
  app.init();

/*

  var urlParams = new URLSearchParams(location.search);
  if (!urlParams.has('ios')) {
      document.location.href = "//" + document.domain + "?ios=12.1.2";
  } else {
      var iosV = urlParams.get('ios');
      try {
          document.getElementById(iosV).className += " selected";
          document.getElementById("iosVersion").innerHTML = "iOS " + iosV;
          console.log(iosV);
      } catch (e) {
          document.location.href = "//" + document.domain + "?ios=12.1.2";
      }

      loadFiles(iosV);
  }
  function setVersion(version) {
      document.location.href = "//" + document.domain + "?ios=" + version;
  }
  function openHeader(name) {
      document.location.href = "//" + document.domain + "/view?ios=" + document.getElementsByClassName("selected")[0].innerHTML + "&header=" + name;
  }

  function search() {
      var sValue = document.getElementById("search").value;
      console.log(sValue);
      document.getElementById("iosVersion").innerHTML = 'Searching for "' + sValue + '"';

      var headerStrings = document.getElementsByClassName("headerstr");
      for (var i = 0; i < headerStrings.length; i++) {
          if (!headerStrings[i].innerHTML.toLowerCase().includes(sValue.toLowerCase())) {
              headerStrings[i].parentElement.parentElement.parentElement.parentElement.parentElement.style.display = "none";
          } else {
              headerStrings[i].parentElement.parentElement.parentElement.parentElement.parentElement.style.display = "block";
          }
      }
  }

  var searchBar = document.getElementById("search");

  searchBar.addEventListener('input', search);

  function loadFiles(v) {
    fetch(`./headers/${v}.json`)
      .then(
        function(response) {
          if (response.status !== 200) {
            console.log('Looks like there was a problem. Status Code: ' +
              response.status);
            return;
          }

          // Examine the text in the response
          response.json().then(function(data) {
            console.log(data[v]);

            var html = "";

            data[v].forEach((item) => {
              html += `
              <div onclick="openHeader('${item}')" class="column is-full-mobile is-full-tablet is-half-desktop" style="background-color: #eee; border-radius: 10px; padding: 20px; margin-bottom: 10px; cursor: pointer">
                  <table style="width: 100%"><tr>
                      <td style="width: 15px"><h4 class="title is-4"><i class="fas fa-file" style="margin-right: 15px"></i></h4></td>
                      <td><h4 class="title is-4 headerstr">${item}</h4></td>
                      <td style="width: 15px; float: right; margin-left: 10px"><h4 class="title is-4"><i class="fas fa-chevron-right" style="opacity: 0.4"></i></h4></td>
                  </tr></table>
              </div>
              `;
            });

            document.getElementById("headers").innerHTML = html;


          });
        }
      )
      .catch(function(err) {
        console.log('Fetch Error :-S', err);
      });
  }
*/