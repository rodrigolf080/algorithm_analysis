def flr(directions):
    x = 0
    y = 0
    side = "N" #North South East West

    print(directions)
    for i in range(0, len(directions)):
        if directions[i] == "F":
            if side == "N":
                y += 1
            elif side == "S":
                y -= 1
            elif side == "E":
                x += 1
            else:
                x -= 1
        if directions[i] == "L":
            if side == "N":
                side = "W"
            elif side == "W":
                side = "S"
            elif side == "S":
                side = "E"
            else:
                side = "N"
        if directions[i] == "R":
            if side == "N":
                side = "E"
            elif side == "E":
                side = "S"
            elif side == "S":
                side = "W"
            else:
                side = "N"
            
    # suck it
    acc = 0

    if side == "N":
        if y > 0 and x == 0:
            acc += 2 + y
        elif y > 0 and x != 0:
            acc += 1 + abs(x) + 1 + y
        elif y < 0 and x == 0:
            acc += abs(y)
        elif y < 0 and x != 0:
            acc += abs(y) + 1 + abs(x)
        elif y == 0 and x != 0:
            acc += 1 + abs(x)
        else:
            acc = 0
        return acc

    if side == "S":
        if y > 0 and x == 0:
            acc += y
        elif y > 0 and x != 0:
            acc += y + 1 + abs(x)
        elif y < 0 and x == 0:
            acc += 2 + abs(y)
        elif y < 0 and x != 0:
            acc += 1 + abs(x) + 1 + abs(y)
        elif y == 0 and x != 0:
            acc += 1 + abs(x)
        else:
            acc = 0
        return acc
           
    if side == "E":
        if x > 0 and y == 0:
            acc += 2 + x
        elif x > 0 and y != 0:
            acc += 1 + abs(y) + 1 + x
        elif x < 0 and y == 0:
            acc += abs(x)
        elif x < 0 and y != 0:
            acc += abs(x) + 1 + abs(y)
        elif x == 0 and y != 0:
            acc += 1 + abs(y)
        else:
            acc = 0
        return acc
     
    if side == "W" and y < 0:
        if x > 0 and y == 0:
            acc += x
        elif x > 0 and y != 0:
            acc += x + 1 + abs(y)
        elif x < 0 and y == 0:
            acc += 2 + abs(x)
        elif x < 0 and y != 0:
            acc += 1 + abs(y) + 1 + abs(x)
        elif x == 0 and y != 0:
            acc += 1 + abs(y)
        else:
            acc = 0
        return acc
    
    return acc

