import mongoose from "mongoose";

const productSchema = new mongoose.Schema({
    productName: {
        type: String,
        required: true
    },
    productPrice: {
        type: Number,
        required: true
    }
});

const ProductModel = mongoose.model("ProductsModel", productSchema)

// ProductsModel.findProduct = () => {

// }

ProductsModel.addProduct = async (product, successCallback, errorCallback) => {
    try {
        const dbRes = await ProductsModel.insertMany([product]);
        console.log("Post | dbRes is: ", dbRes);
        successCallback(dbRes);
    } catch (error) {
        console.error("post | deErr is: ", dbErr);
        errorCallback(dbErr);
    }
};

ProductsModel.deleteProduct = async (
    id,
    successCallback,
    errorCallback

)

// findProduct
// addProduct
// editProduct
// deleteProduct

export default ProductsModel;