local n = io.read("*n")

for i = 0, n do
  local c = io.read(1)
  io.write(c .. c)
end