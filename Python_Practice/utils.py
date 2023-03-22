def find_max(param):
    maximum = param[0]
    for item in param:
        if item>maximum:
            maximum=item
    return maximum