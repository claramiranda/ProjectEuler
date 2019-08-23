function fiboEvenSum(n) {
  // You can do it!
  let i = 0, sum = 0;
  let fibo = [];

  //for(i = 0;i <= n+1; i++){
    while(sum < 4000000){
    if(i < 3){
      fibo[i] = i;
    }
    else{
      fibo[i]=fibo[i-2]+fibo[i-1];
    }
    if(fibo[i] % 2 == 0){
      sum+=fibo[i];
    }
   // console.log(fibo[i])
   i++;
  }
  console.log(sum);

  return sum;
}

fiboEvenSum(10);