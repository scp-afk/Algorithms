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
