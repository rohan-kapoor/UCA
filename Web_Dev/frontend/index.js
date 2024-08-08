// function init() {
//   document.getElementById("jsworld").innerHTML = "Trying something new";
// }

// var productsList = [
//     {name: "Product 1", description: "Some additional details about P1", price: 100},
//     {name: "Product 2", description: "Some additional details about P2", price: 200},
// ]

var productsList = [];

const getproductList = () => {
    productsList = [
        {name: "Product 1", description: "Some additional details about P1", price: 100},
        {name: "Product 2", description: "Some additional details about P2", price: 200},
    ]
    initProductList();
}

const initProductList = () => {
  document.getElementById("productMenu").innerHTML = `
    <h3>List of Products</h3>
    <table>
            <thead>
                <tr>
                    <th>Sr. No.</th>
                    <th>Product Name</th>
                    <th>Details</th>
                    <th>Price</th>
                </tr>
            </thead>
            <tbody>
            ${getProductListHTMLUsingMap()}
            </tbody>
        </table>`;
};

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

function getProductListHTMLUsingMap() {
    var rowsOfProducts = productsList.map((item,index) => {
        return `<tr>
                <td>${index+1}</td>
                <td>${item.name}</td>
                <td>${item.description}</td>
                <td>${item.price}</td>
            </tr>`;
    });
    return rowsOfProducts.join("");  //for removing , as returning array elements
}

// init();
initProductList();
setTimeout(getproductList,5000);
