//bitwise tricks

string even_or_odd(int x){
  if(x & 1) return "Odd";
  else return "Even";
}

string is_power_of_two(int x){
  if(x == 0) return "NO";
  if(x & (x - 1)) return "NO";
  else return "YES";
}

//check if the kth bit of x is set or not(indexed from back of binary representation of x)
bool set_or_not(int x,int k){
  if(x & (1 << k)) return true;
  else return false;
}

//to toggle the kth bit of x
int toggle(int x,int k){
  return x ^ (1 << k);
}
//to set the kth bit to 1
int set_kth(int x,int k){
  return x | (1 << k);
}

// to unset the kth bit;
int unset_kth(int x,int k){
  return x & ~(1 << k);
}
//divide an integer by kth power of two (x / 2 ** k)
int divide(int x,int k){
  return x >> k;
}
//multiply an integer by kth power of two (x * 2 ** k)
int multiply(int x,int k){
  return x << k;
}

//to find the x mod kth power of 2 (x mod 2**k)
int mod(int x,int k){
  return x & ((1 << k) - 1);
}
