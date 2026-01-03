word = input()
translate = input()

if word == "".join(list(reversed(translate))):
    print("YES")
else :
    print("NO")