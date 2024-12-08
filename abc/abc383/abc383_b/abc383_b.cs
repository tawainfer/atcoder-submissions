using static System.Console;

public class Program
{
    public static void Main()
    {
        int[] buf = ReadLine()!.Split().Select(int.Parse).ToArray();
        int h = buf[0];
        int w = buf[1];
        int d = buf[2];

        List<List<char>> f = new();
        for (int i = 0; i < h; i++)
        {
            f.Add(ReadLine()!.ToList());
        }

        int ans = 0;
        for (int y1 = 0; y1 < h; y1++)
        {
            for (int x1 = 0; x1 < w; x1++)
            {
                for (int y2 = 0; y2 < h; y2++)
                {
                    for (int x2 = 0; x2 < w; x2++)
                    {
                        if (y1 == y2 && x1 == x2) continue;
                        if (f[y1][x1] == '#' || f[y2][x2] == '#') continue;

                        int cnt = 0;
                        for (int y3 = 0; y3 < h; y3++)
                        {
                            for (int x3 = 0; x3 < w; x3++)
                            {
                                // if ((y3, x3) == (y1, x1) || (y3, x3) == (y2, x2)) continue;
                                if (f[y3][x3] == '#') continue;
                                if (Math.Abs(y3 - y1) + Math.Abs(x3 - x1) > d && Math.Abs(y3 - y2) + Math.Abs(x3 - x2) > d) continue;
                                cnt++;
                            }
                        }

                        ans = Math.Max(ans, cnt);
                    }
                }
            }
        }

        WriteLine(ans);
    }
}
