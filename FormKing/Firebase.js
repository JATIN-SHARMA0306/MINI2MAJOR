// Import the functions you need from the SDKs you need
import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";
import { getFirestore } from "firebase/firestore";
import { collection, addDoc } from "firebase/firestore"; 
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyB-_FyZaremhQBSAaPUouDCFdRA75lY9SE",
  authDomain: "king-b8067.firebaseapp.com",
  databaseURL: "https://king-b8067.firebaseio.com",
  projectId: "king-b8067",
  storageBucket: "king-b8067.appspot.com",
  messagingSenderId: "419411173358",
  appId: "1:419411173358:web:8b9ea5c1adeee11b0e78ff",
  measurementId: "G-JG99E8SMSS"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
const analytics = getAnalytics(app);
const db = getFirestore();

