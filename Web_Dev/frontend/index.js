// function init() {
//   document.getElementById("jsworld").innerHTML = "Trying something new";
// }

// var productsList = [
//     {name: "Product 1", description: "Some additional details about P1", price: 100},
//     {name: "Product 2", description: "Some additional details about P2", price: 200},
// ]

function renderProducts() {
    let productsListFromServer = [];
  
    function getProductsList() {
      productsListFromServer = productsList;
      initProductsListTable();
    }
  
    function initProductsListTable() {
      if (!productsListFromServer || productsListFromServer?.length === 0) {
        document.getElementById("productMenu").innerHTML = `${getLoader()}`;
        return;
      }
      document.getElementById("productMenu").innerHTML = `
          <div class="row center">
            <div class="col-6">
              <table>
                <thead>
                  <tr>
                    <th>Sr. No. </th>
                    <th>Product Name</th>
                    <th>Description</th>
                    <th>Price</th>
                  </tr>
                </thead>
                ${getProductListHTMLUsingMap()}
              </table>
            </div>
          </div>
        `;
    }
  
    function getProductListHTMLUsingMap() {
      if (!productsListFromServer || productsListFromServer?.length === 0) {
        return ``;
      }
      var rowsOfProducts = productsListFromServer?.map((item, index) => {
        return `<tr>
                <td>${index + 1}</td>
                <td>${item.name}</td>
                <td>${item.description}</td>
                <td>${item.price}</td>
              </tr>`;
      });
  
      return `
        <tbody>
          ${rowsOfProducts?.join("")}
        </tbody>
      `;
    }
  
    function getLoader() {
      if (!productsListFromServer || productsListFromServer?.length === 0) {
        return `
          <div class="row">
            <div class="col">
              Loading Data
            </div>
          </div>
        `;
      } else return ``;
    }
  
    initProductsListTable();
    setTimeout(getProductsList, 5000);
  }
  
  renderProducts();

// function getProductListHTML(){
//     var rows = ""
//     for(let i = 0; i < productsList.length; i++) {
//         rows = rows +
//                 `<tr>
//                 <td>${i+1}</td>
//                 <td>${productsList[i].name}</td>
//                 <td>${productsList[i].description}</td>
//                 <td>${productsList[i].price}</td>`
//     }
//     return rows
// }

// function getProductListHTMLUsingMap() {
//     var rowsOfProducts = productsList.map((item,index) => {
//         return `<tr>
//                 <td>${index+1}</td>
//                 <td>${item.name}</td>
//                 <td>${item.description}</td>
//                 <td>${item.price}</td>
//             </tr>`;
//     });
//     return rowsOfProducts.join("");  //for removing , as returning array elements
// }

// // init();
// initProductList();
// setTimeout(getproductList,5000);
