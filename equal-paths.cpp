#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)
#include<iostream>

#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
int equalHelper (Node * root, int& h, int& p);

bool equalPaths(Node * root)
{
    // Add your code below
    int height = 0;
    int prev = 0;

    if(root == NULL){
      return true;
    }
   
    if((root->left == NULL) && (root->right == NULL)){
      return true;
    }
    

   int toReturn = equalHelper(root,height,prev);
   
   if ((toReturn == -2)||(toReturn == -1)){
    return true;
   }
   else{
    return false;
   }

}

int equalHelper (Node * root, int& h, int& p){
  int temp = h;
  
  if(root == NULL){

    if(p == 0){
      p = temp;
      h--;
      
      return h;
    }
    else if(p != temp){
      
      h--;
      if(h == 1){
      h--;
      
    }
      
     
      return h;
    }
    if(h == 1){
      h--;
      return h;
    }
   
    return h;
    
  } 

  h++;
  
  equalHelper(root->left, h, p);
  equalHelper(root->right, h, p ); 

 
  

}

