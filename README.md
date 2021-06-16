## Preamble

I'm attempting to implement all the algorithms found in [Introduction to Algorithms](https://en.wikipedia.org/wiki/Introduction_to_Algorithms)

I'll be using the C language in hopes of improving my fundamental computer science skills. Other languages may provide abstractions and built-in data structures to spring-board my implementations off of. I want to do everything from scratch, so C seems like an obvious choice.

## Insertion Sort

Input: A sequence of numbers

`[22, 12, 1, 18, 66, 15, 18, 14]`

Output: A reordering of that same sequence from least to greatest

`[1, 12, 14, 15, 18, 18, 22, 66]`

Insertion Sort is good at sorting a small number of elements.

Description from Introduction to Algorithms:

```
"Insertion sort works the way many people sort a hand of
playing cards. We start with an empty left hand and the cards face down on the
table. We then remove one card at a time from the table and insert it into the
correct position in the left hand. To find the correct position for a card, we compare
it with each of the cards already in the hand, from right to left. At all times, the cards held in the left hand are sorted, and these cards
were originally the top cards of the pile on the table"
```

## Running the Code

1. Clone the Repo `git clone https://github.com/zjcrumpton/insertion-sort.git`

2. run `make build`

3. run `make run`
