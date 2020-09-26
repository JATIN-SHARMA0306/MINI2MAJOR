import React from 'react';
import { StyleSheet, Text, View,TouchableOpacity,Image ,ScrollView} from 'react-native';
import {Audio} from 'expo-av';

const listbackgroundcolors={
  1:"#FF3E4D",
  2:"#0A79DF",
  3:"#25CCF7",
  4:"#10A881",
  5:"#019031",
  6:"#F3B63A",
  7:"#F9DDA4",
  8:"#99AAAB",
  9:"#BB2CD9",
  10:"#2B2B52"
}

const soundlist={
  one:require("./src/assets/one.wav"),
  two:require("./src/assets/two.wav"),
  three:require("./src/assets/three.wav"),
  four:require("./src/assets/four.wav"),
  five:require("./src/assets/five.wav"),
  six:require("./src/assets/six.wav"),
  seven:require("./src/assets/seven.wav"),
  eight:require("./src/assets/eight.wav"),
  nine:require("./src/assets/nine.wav"),
  ten:require("./src/assets/ten.wav"),
}

export default class App extends React.Component {

playaudio = async number =>{
  const soundobject=new Audio.Sound();
  try{
    let path=soundlist[number]
    await soundobject.loadAsync(path)
    await soundobject
    .playAsync()
    .then(async playbackStatus=>{
      setTimeout(() => {
        soundobject.unloadAsync();
      }, playbackStatus.playableDurationMillis);
    })
    .catch(error=>console.log(error))
  }
catch(error)
{
  console.log(error)
}
}

  render(){
  return (
    <ScrollView style={styles.container}>
      <View style={styles.grid}>
      <Text style={{fontSize:20,color:"white",fontWeight:"bold",textDecorationLine:"underline"}}>SPANISH SOUND GENERATOR</Text>
        <Image 
        source={require("./assets/audio.png")}
        style={styles.image}
        />
        <View style={styles.row}>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[1]}]} onPress={()=>this.playaudio("one")}>
        <Text style={styles.itemtext}>ONE</Text>
        </TouchableOpacity>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[2]}]} onPress={()=>this.playaudio("two")}>
        <Text style={styles.itemtext}>TWO</Text>
        </TouchableOpacity>
        </View>
        <View style={styles.row}>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[3]}]} onPress={()=>this.playaudio("three")}>
        <Text style={styles.itemtext}>THREE</Text>
        </TouchableOpacity>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[4]}]} onPress={()=>this.playaudio("four")}>
        <Text style={styles.itemtext}>FOUR</Text>
        </TouchableOpacity>
        </View>
        <View style={styles.row}>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[5]}]} onPress={()=>this.playaudio("five")}>
        <Text style={styles.itemtext}>FIVE</Text>
        </TouchableOpacity>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[6]}]} onPress={()=>this.playaudio("six")}>
        <Text style={styles.itemtext}>SIX</Text>
        </TouchableOpacity>
        </View>
        <View style={styles.row}>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[7]}]} onPress={()=>this.playaudio("seven")}>
        <Text style={styles.itemtext}>SEVEN</Text>
        </TouchableOpacity>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[8]}]} onPress={()=>this.playaudio("eight")}>
        <Text style={styles.itemtext}>EIGHT</Text>
        </TouchableOpacity>
        </View>
        <View style={styles.row}>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[9]}]} onPress={()=>this.playaudio("nine")}>
        <Text style={styles.itemtext}>NINE</Text>
        </TouchableOpacity>
        <TouchableOpacity style={[styles.item,{backgroundColor:listbackgroundcolors[10]}]} onPress={()=>this.playaudio("ten")}>
        <Text style={styles.itemtext}>TEN</Text>
        </TouchableOpacity>
         </View>
      </View>
    </ScrollView>
  );
}
}



const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#586776',
    marginTop:30
    
  },
  grid:{
    margin:10,
    alignItems:"center"

  },
  image:{
    marginTop:20,
    marginBottom:20,
    width:300,
    height:100,
    borderColor:"red",
    borderWidth:3

  },
  row:{
    flexDirection:"row"
  },
  item:{
    flex:1,
    height:80,
    margin:10,
    alignItems:"center",
    justifyContent:"center",
    borderRadius:30

  },
  itemtext:{
    color:"white",
    fontSize:25
  }
  
});
