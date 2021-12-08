import {Form,Button, Container, Row,Col} from 'react-bootstrap';
import { initializeApp } from "firebase/app";
import { getFirestore } from "firebase/firestore";
import { collection, addDoc } from "firebase/firestore"; 
import { useState } from 'react';
//import {v4 as uuidv4} from "uuid";

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
const db = getFirestore();

let storeData = async (username,useremail,userPassword) =>{
  try {
    const docRef = await addDoc(collection(db, "newusers"), {
      fullname : username,
      userEmail : useremail,
      userPassword : userPassword
    });
    console.log("Document written with ID: ", docRef.id);
  } catch (e) {
    console.error("Error adding document: ", e);
  }
}


function UserForm() {
    const [username,setName] = useState(null);
    const [useremail,setEmail] = useState(null);
    const [userPassword,setPassword] = useState(null);
    return(
        <Container>
        <Form>
        <Row>
        <Col md={{ span: 4, offset: 4 }}>
          <Form.Group>
            <Form.Label>Full Name</Form.Label>
            <Form.Control type="text" placeholder="Enter your name"
            onChange={(ev)=>{setName(ev.target.value)}}
            ></Form.Control>
          </Form.Group>
        </Col>
        <Col md={{ span: 4, offset: 4 }}>
  <Form.Group className="mb-3" controlId="formBasicEmail">
    <Form.Label>Email address</Form.Label>
    <Form.Control type="email" placeholder="Enter email"
      onChange={(ev)=>{setEmail(ev.target.value)}}
     />
    <Form.Text className="text-muted">
      We'll never share your email with anyone else.
    </Form.Text>
  </Form.Group>
  </Col>
  <Col md={{ span: 4, offset: 4 }}>
    <Form.Group className="mb-3" controlId="formBasicPassword">
    <Form.Label>Password</Form.Label>
    <Form.Control type="password" placeholder="Password" 
     onChange={(ev)=>{setPassword(ev.target.value)}}
    />
  </Form.Group>
  <Form.Group className="mb-3" controlId="formBasicCheckbox">
    <Form.Check type="checkbox" label="Check me out" />
  </Form.Group>
  </Col>
  <Col md={{ span: 4, offset: 4 }}>
  <Button variant="primary"
  onClick={()=>{
    storeData(username,useremail,userPassword);
  }}
  >
    Submit
  </Button>
  </Col>
  </Row>
</Form>
        </Container>
    )
}
export default UserForm;