import scala.collection.mutable

class Solution 
{
    def fourSum(A: Array[Int], B: Int): Array[Array[Int]]  = {
      val hash = mutable.HashMap[Int, mutable.ArrayBuffer[(Int, Int)]]()
      val res = mutable.ArrayBuffer[Array[Int]]()
    
      val sortedArr = A.sorted
      val n = sortedArr.length
    
      for {
        i <- 0 until n
      } 
      {
        for {
          j <- i + 1 until n
          sum = sortedArr(i) + sortedArr(j)
        } {
          if (hash.contains(B - sum)) {
            for {
              half <- hash(B - sum)
              arr = Array(half._1, half._2) ++ Array[Int](sortedArr(i), sortedArr(j))
            } {
              val exists = res.exists(p => p.zip(arr).forall(t2 => t2._1 == t2._2))
              if (!exists) res.append(arr)
            }
          }
        }
    
        for {
          k <- 0 until i
          sum = sortedArr(i) + sortedArr(k)
        } {
          if (!hash.contains(sum)) hash.put(sum, mutable.ArrayBuffer[(Int, Int)]())
          hash(sum).append((sortedArr(k), sortedArr(i)))
        }
      }
    
      res.toArray.sortWith((lt, rt) => lt(0) < rt(0) || (lt(0) == rt(0) && lt(1) < rt(1)))
    }
}
