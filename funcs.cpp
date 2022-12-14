#include <iostream>
#include <string>



std::string printRange(int left, int right){
    if (left > right){
        return "";
    }
    if (left == right){

        return std::to_string(left);
    }
    else{
    return std::to_string(left) + " " + printRange(left + 1, right);  
    }  
}

int sumRange(int left, int right){
     
    
    if (left == right){
        
        return left;
    }

    else{
        return left + sumRange(left+1,right); 
    }
}


int sumArrayInRange(int *arr, int left, int right){
    if(left > right){

        return 0;

    }


else{

    return (arr[left] + sumArrayInRange(arr, left + 1, right));

}

}


int sumArray(int *arr, int size){

return sumArrayInRange(arr, 0, size - 1);

}

bool isAlphanumeric(std::string s){

    if (s.length()==0){
        return true;
    }
    else{
        char c = s[0];

        if (isalpha(c) || isdigit(c)){
            return isAlphanumeric(s.substr(1));
        }
        else{
        return false;
    }
    }
    
    
}

bool nestedParens(std::string s){

    if(s.length() == 0){
        return true;
    }
    else if(s.length() < 2){
        return false;
    }
    else{
        if(s[0] == '(' && s[s.size()-1] == ')'){
            return nestedParens(s.substr(1, s.size()-2));
        }
        else{
            return false;
        }
    }

}
