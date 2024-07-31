TextFile textFile = new TextFile("input.txt", "output.txt");

int[] nums = textFile.Read();
int target = nums[nums.Length - 1];
Array.Resize(ref nums, nums.Length - 1);

int[] TwoSum(int[] nums, int target)
{
    Dictionary<int, int> dictionary = new Dictionary<int, int>();
    for (int i = 0; i < nums.Length; i++)
    {
        //1. nums_1 + nums_2 = target => nums_2 = target - nums_1 <=> 2 + 7 = 9 => 7 = 9 - 2
        if (dictionary.ContainsKey(nums[i])) //2. This line determine if the nums_1 = 2 is in the dictionary or not
        {
            return [dictionary[nums[i]], i];//5. Finally we extract the position of nums_1 = 7 and nums_2 = 2
        }
        else if (!dictionary.ContainsKey(target - nums[i]))//? Just a false safe so it not gonna duplicate.
        {
            dictionary.Add(target - nums[i], i);  //3. If not we insert nums_2 = target - nums_1 = 9 - 2 = 7 into the dictionary.
        }
        /*4. After a loop, the position of nums_1 and nums_2 basically swapped.
            2 + 7 = 9 (2 is nums_1 and 7 is nums_2)
            After the loop, nums_1 = 7 and nums_2 = 2
        It is because now we want to check if nums_1 is in the dictionary which already exists.*/
    }
    throw new Exception("No two sum solution");
}

textFile.Write(TwoSum(nums, target));
