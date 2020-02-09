// O(n!)>O(2^n)>O(n^2)>O(nlogn)>O(n)>O(logn)>O(1)
// ignore low order terms when higher order is available in the program
// O(1) Big oh of one which is also constant time

//Example One: Linear time
// for x in range(0,n):
//     print x; // complexity of this line is O(1)
//complexity of this whole program is N*O(1)

//Example 2: Linear time
// y = 5 + (15 * 20); ->O(1)
// for x in range(0,n): ->O(N)
//  print x; ->O(1)
//total time = O(1)+O(N) = O(N)

//Example 3: Quadratic(দ্বিঘাত) time
// for x in range(0,n):
//      for y in range(O,n):
//          print x*y; //O(1)
