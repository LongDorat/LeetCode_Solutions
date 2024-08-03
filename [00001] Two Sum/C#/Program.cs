TextFile textFile = new TextFile("input.txt", "output.txt");

int[] nums = textFile.Read();
int target = nums[nums.Length - 1];
Array.Resize(ref nums, nums.Length - 1);

int[] TwoSum(int[] nums, int target)
{
    Dictionary<int, int> dictionary = new Dictionary<int, int>();
    for (int i = 0; i < nums.Length; i++)
    {
        if (dictionary.ContainsKey(target - nums[i]))
        {
            return [dictionary[target - nums[i]], i];
        }
        else if (!dictionary.ContainsKey(nums[i]))
        {
            dictionary.Add(nums[i], i);
        }
    }
    throw new Exception("No two sum solution");
}

textFile.Write(TwoSum(nums, target));
