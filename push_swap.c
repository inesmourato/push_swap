






/*

[]declare pointers to 2 linked lists (stack a and b)
        []set both pointers to NULL to avoid undefined behaviour and indicate im starting with empty stacks

[] handle input count errors. Argc must be 2 or more and second inout must not be empty
        []if input erros, return error

[] handle both cases of input (numbers & strings)
        []if input is a string, call split to split the substrings

[] initialize stack a by appending each input number as a node to stack a
        [] handle int overflow, duplicates and syntax errors (only contains digits, '-', '+')
                [] if errors found, free stack a and return error
        [] check for each input, if it's a long integer
                [] if input is a string convert it to a long int
        [] append the nodes to satck a

[] check if stack a is sorted
        [] if not, implement the algorithm
                [] check for 2 numbers
                        [] if so, swap 
                [] check for 3 numbers
                        []if so, implement 'sort three' algorithm
                [] check if more than 3 numbers
                        [] if so, implement the Turk Algorithm



util functions:
- to handle errors
- operations
- stack lenght
- last node
- min and max nodes


*/