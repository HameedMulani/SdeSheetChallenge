if(n == 0) return 0;
int start = 0;// Array Pointer with without duplicates
int i = 0;
while(i < arr.size()-1){ // loop till  n - 2 for comparision of pair
if(arr[i] != arr[i+1]){
arr[start] = arr[i];
start++; // if insert duplicate then increment it
i++;
}else{ // if equal then forward i to +1
i++;
}
}
// Insert Last element into Array n-1th elemnet eg; 4 in first testcase
arr[start] = arr[n-1];
return start++;