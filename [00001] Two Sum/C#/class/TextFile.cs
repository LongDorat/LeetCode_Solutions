public class TextFile
{
    public string InputFilePath { get; set; }
    public string OutputFilePath { get; set; }
    public TextFile(string inputFilePath, string outputFilePath)
    {
        InputFilePath = inputFilePath;
        OutputFilePath = outputFilePath;
    }

    public int[] Read()
    {
        string s = File.ReadAllText(InputFilePath);
        string[] arr = s.Split(' ');

        int[] result = new int[arr.Length];
        for (int i = 0; i < arr.Length; i++)
        {
            result[i] = Convert.ToInt32(arr[i]);
        }
        return result;
    }

    public void Write(int[] result)
    {
        File.WriteAllText(OutputFilePath, String.Join(" ", result));
    }
}