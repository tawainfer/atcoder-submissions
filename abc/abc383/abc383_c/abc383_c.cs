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

        int[,] g = new int[h, w];
        PriorityQueue<(int, int, int), int> q = new();
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                g[i, j] = (f[i][j] == 'H' ? d + 1 : int.MinValue);
                if (f[i][j] == 'H')
                {
                    q.Enqueue((d + 1, i, j), -(d + 1));
                }
            }
        }

        int[] dy = new int[] { -1, 0, 1, 0 };
        int[] dx = new int[] { 0, 1, 0, -1 };
        while (q.Count >= 1)
        {
            (int cc, int cy, int cx) = q.Dequeue();
            for (int i = 0; i < 4; i++)
            {
                int ey = cy + dy[i];
                int ex = cx + dx[i];
                if (ey < 0 || ey >= h || ex < 0 || ex >= w) continue;
                if (f[ey][ex] == '#') continue;
                if (g[ey, ex] == int.MinValue && cc >= 1)
                {
                    g[ey, ex] = cc - 1;
                    q.Enqueue((cc - 1, ey, ex), -(cc - 1));
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                // Write($"{g[i, j]} ");
                if (g[i, j] >= 1)
                {
                    ans++;
                }
            }
            // WriteLine();
        }

        WriteLine(ans);
    }
}
