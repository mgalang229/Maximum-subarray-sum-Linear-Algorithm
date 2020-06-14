# Maximum-subarray-sum-Linear-Algorithm  
### Also known as "Kadane's Algorithm
<pre>
  Same task as the <b>"Maximum subarray sum Quadratic Algorithm"</b> in the repositories.  
  <b>Changes:</b> More optimized than the previous one.
</pre>
### Program Simulation
<pre>
  start k loop (until k < 8)
  k = 0
  sum = max(-1, 0 + (-1)) //-1
  best = max(0, -1) // 0

  k = 1
  sum = max(2, -1 + 2) // 2
  best = max(0, 2) // 2

  k = 2
  sum = max(4, 2 + 4) // 6
  best = (2, 6) // 6

  k = 3
  sum = max(-3, 6 + (-3)) // 3
  best = max(6, 3) // 6

  k = 4
  sum = max(5, 4 + 4) // 8
  best = max(6, 8) // 8

  k = 5
  sum = max(2, 8 + 2) // 10
  best = max(8, 10) // 10

  k = 6
  sum = max(-5, 10 + (-5)) // 5
  best = max(10, 5) // 10;

  k = 7
  sum = max(2, 5 + 2) // 7
  best = max(10, 7) // 10

  k = 8 (8 isn't less than 8), end k loop

  Final Value of best = 10
  </pre>
