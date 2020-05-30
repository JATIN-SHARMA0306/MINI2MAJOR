const users = [
  {
     name: '',
     avatar: 'https://i.pinimg.com/originals/b7/a4/e1/b7a4e1c4fc4a9a91a9154943567ece6d.gif'
  },
   // more users here
 ]

import React from 'react';
import { StyleSheet, Text, View,TouchableOpacity ,TextInput,SafeAreaView,Image,KeyboardAvoidingView} from 'react-native';
import {Card,Button} from 'react-native-elements';

export default class App extends React.Component {

  
 
  constructor(){
    super();
    this.state={
      randomcolor:null,
      inputstate:"",
      data1:"",
      data2:"",
      data3:null,
      data4:"",
      data5:"",
      data6:""
    }
  }

  getrandomcolor=()=>{
  return(
     
    "rgb("+(Math.floor(Math.random()*256))+','+
    (Math.floor(Math.random()*256))+','+
    (Math.floor(Math.random()*256))+')' )
}

reset=()=>{
  this.setState({data1:""})
  this.setState({data2:""})
  this.setState({data3:""})
  this.setState({data4:""})
  this.setState({data5:""})
  this.setState({data6:""})
}

 buttonpressed=()=>{
   this.setState({
     randomcolor:this.getrandomcolor()
   })
 }

 fetchweather=()=>{
   fetch(`https://api.openweathermap.org/data/2.5/weather?q=Ashok Nagar,Delhi&appid=d263837b7d57aae594ceb0aa3ac35fdd`)
   .then(response=>response.json())
   .then(responsejson=>{
     console.log(responsejson.weather[0].main)
     console.log(responsejson.main)
     this.setState({data1:responsejson.weather[0].main})
     this.setState({data2:responsejson.weather[0].description})
     this.setState({data3:Math.floor(responsejson.main.temp-273)+"°"})
     this.setState({data4:responsejson.main.temp_min+"K"})
     this.setState({data5:responsejson.main.temp_max+"K"})
     this.setState({data6:responsejson.main.humidity})
     console.log(this.state.data1)
     console.log(this.state.data2)
     console.log(this.state.data3)
     console.log(this.state.data4)
     console.log(this.state.data5)
  })
 }
render(){
  return (
    <SafeAreaView style={[styles.container]}>
    <View style={styles.inputcontainer}>
    <KeyboardAvoidingView>
    <TextInput
      style={styles.input}
      selectionColor="tomato"
      keyboardType="default"
      placeholder="Enter city name..."
      placeholderTextColor="#fff"
      value={this.state.inputstate}
      onChangeText={inputstate=>{this.setState({inputstate})}}
      keyboardAppearance="light"
      >
    </TextInput>
    </KeyboardAvoidingView>
    </View>
    <View style={styles.cardview}>
    <Card containerStyle={{backgroundColor:"#4BCFFA",borderRadius:25,borderWidth:3}} title="||Weather Results||">
  {
    users.map((u, i) => {
      return (
        <View key={i} style={styles.user}>
          <Image
            style={styles.image}
            resizeMode="cover"
            source={{ uri: u.avatar }}
          />
          <Text style={styles.name}>{u.name}</Text>
          <Text style={{marginBottom: 10,fontSize:20}}>
           Main:                    {this.state.data1}{'\n'}
           Description:        {this.state.data2}{'\n'}
           Temperature:     {this.state.data3}{'\n'}
           Temp-Min:          {this.state.data4}{'\n'}
           Temp-Max:         {this.state.data5}{'\n'}
           Humidity:            {this.state.data6}
          </Text>
        </View>
      );
    })
  }
</Card>
    </View>  
    <View style={styles.below}>
    <TouchableOpacity style={styles.button} onPress={this.fetchweather}>
    <Text style={styles.text}>|CLICK|</Text>
  </TouchableOpacity>
  <TouchableOpacity style={styles.button} onPress={this.reset}>
    <Text style={styles.text}>|RESET|</Text>
  </TouchableOpacity>
  </View>
</SafeAreaView>
    
);
}
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#2F363F',
    alignItems: 'center',
    justifyContent: 'center',
    marginTop:30,
    borderWidth:3,
    borderColor:"#45CE30",
    borderRadius:25
  },
  button:{
    borderRadius:25,
    borderColor:"#EAF0F1",
    backgroundColor:"#2475B0",
    marginTop:20,
    borderWidth:3,
    marginBottom:6,
    marginRight:10
  },
  text:{
    color:"#fff",
    fontSize:20,
    padding:12
  
  },
  inputcontainer:{
    marginBottom:20,
    borderColor:"royalblue",
    borderRadius:20,
    borderWidth:2,
    marginTop:40,
    width:300,
    alignContent:"center"
    
  },
  input:{
    paddingTop:10,
    paddingLeft:20,
    paddingRight:20,
    paddingBottom:10,
    color:"#fff"
  },
  below:{
    flexDirection:"row",
    
  },
  image:{
    height:100,
    width:300,
  }
});
