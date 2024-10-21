// import React from 'react'
// import { Header } from './Header'

// export function App() {
//     // return ("Hello World");
//     // return(<h1>Welcome to React applicaion</h1>)
//     return <Header title="Welcome" link="link1"></Header>
// }


// import { Layout } from "./components/layout/layout";

// export function App() {
//     return (
//         <>
//         <Layout></Layout>
//         </>
//     );
// }

import { createBrowserRouter , RouterProvider } from "react-router-dom"
import { Header } from "./aHeader";
import ProductList from "./components/productList";
import { Signup } from "./components/signup/Signup";

export function App() {

    const router = createBrowserRouter([
        {
        path: "/",
        element: <ProductList></ProductList>
    },
    {
        path: "/signup",
        element: <Signup/>
    }
    ]);

  return (
    <>
      <header>
        <Header></Header>
      </header>
      <main>
        <RouterProvider router={router}></RouterProvider>
      </main>
      <footer></footer>
    </>
  );
}