vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
int carry = 0;
   
   int i = n-1;
   
   int j = m-1;
   
   vector<int> ans;
   
   while(i >= 0 && j >= 0){
       
       int val1 = a[i];
       int val2 = b[j];
       
       int sum = val1 + val2 + carry;
       
       carry = sum / 10;
       
       sum = sum % 10;
       
       ans.push_back(sum); 
       
       i--;
       
       j--;
   }
   
   //CASE -> 1 IF FIRST ARRAY IS GREATER;
   
   while(i >= 0){
      
       int val1 = a[i];
       
       int sum = val1 + carry;
       
       carry = sum / 10;
       
       sum = sum % 10;
       
       ans.push_back(sum); 
       
       i--;
       
   }
   
   //CASE -> 2 IF SECOND ARRAY IS  GREATER;
   
   while(j >= 0){
       
       int val2 = b[j];
       
       int sum = val2 + carry;
       
       carry = sum / 10;
       
       sum = sum % 10;
       
       ans.push_back(sum); 
       
       j--;
  
   }
   
   //CASE -> 3 IF CARRY IS left;
   
   while(carry != 0){
   
       int sum = carry;
       
       carry = sum / 10;
       
       sum = sum % 10;
       
       ans.push_back(sum);
       
   }
   
   reverse(ans.begin(),ans.end());
   
   return ans;
}