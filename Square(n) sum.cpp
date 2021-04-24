//Code wars version
public static class Kata
{
  public static int SquareSum(int[] n)
  { 
    int square = 0;
		int result = 0;
		for (int i = 0; i < n.Length; i++)
		{
			square = n[i] * n[i]; // could also use math.pow(nums[i], 2)
			result += square;
		}
		return result;
  }
  
}

//Visual studio
class Program
	{
		public static int squareAdd(int[] nums)
		{
			int square = 0;
			int result = 0;
			for (int i = 0; i < nums.Length; i++)
			{
				square = nums[i] * nums[i]; // could also use math.pow(nums[i], 2)
				result += square;
			}
			return result;
		}


		static public void Main(String[] args)
		{
			int[] test = { 1, 2, 2 };
			Console.WriteLine(squareAdd(test));
		}
	}
  
  //optimized solution
  using System.Linq;
public static class Kata
{
  public static int SquareSum(int[] n) => n.Sum(i => i * i);
}
