var
  n, i, ma, countMa: integer;
  p: array of integer;

begin
  readln(n);
  SetLength(p, n);
  for i := 0 to n - 1 do
    read(p[i]);

  ma := p[0];
  countMa := 0;
  for i := 0 to n - 1 do
  begin
    if p[i] > ma then
    begin
      ma := p[i];
      countMa := 1;
    end
    else if p[i] = ma then
      countMa := countMa + 1;
  end;

  if (p[0] = ma) and (countMa = 1) then
    writeln(0)
  else
    writeln(ma - p[0] + 1);
end.
