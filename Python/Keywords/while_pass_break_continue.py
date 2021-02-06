count = 1
while True:
    if count % 2 == 0:  # if count is a multiple of 2 then without printing anything go to next iteration
        count += 1
        continue
    elif count % 3 == 0:  # if count is a multiple of 3 then don't do anything
        pass
    else:
        print(count)
    if count > 10:  # if count is greater than 10 break the loop
        break
    else:
        count += 1
