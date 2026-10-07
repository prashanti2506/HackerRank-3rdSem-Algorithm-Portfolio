# HackerRank Algorithms & GitHub Coding Portfolio

## Student Information

| Field | Details |
|---|---|
| Name | Prashanti |
| Student ID / USN | R25EF196 |
| Program | B.Tech Computer Science and Engineering |
| Semester | 3rd Semester |
| Language | C++ |
| GitHub | https://github.com/prashanti2506 |
| Repository | https://github.com/prashanti2506/HackerRank-3rdSem-Algorithm-Portfolio |
| HackerRank Profile | Add your HackerRank profile URL here |

## Activity Overview

This portfolio contains five algorithmic programming problems selected for a 3rd-semester Computer Science and Engineering coding activity. Each solution focuses on correct implementation, efficient algorithms, time complexity, space complexity, and clean coding practices.

## Problems Completed

| No. | Problem | Main Technique | Time | Auxiliary Space |
|---|---|---|---|---|
| 01 | Mini-Max Sum | One-pass min/max tracking | O(n) | O(1) |
| 02 | Birthday Cake Candles | Maximum + frequency counting | O(n) | O(1) |
| 03 | Insertion Sort - Part 1 | Insertion and shifting | O(n) worst case | O(1) |
| 04 | Binary Search | Divide and conquer on sorted array | O(log n) | O(1) |
| 05 | Mark and Toys | Sorting + greedy selection | O(n log n) | O(log n) |

## Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
├── README.md
├── 01-Mini-Max-Sum/
│   └── solution.cpp
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
├── 04-Binary-Search/
│   └── solution.cpp
└── 05-Mark-and-Toys/
    └── solution.cpp
```

## 01 - Mini-Max Sum

**Approach:** Read the five values, calculate their total, and track the minimum and maximum values. The minimum possible sum is the total minus the maximum value, while the maximum possible sum is the total minus the minimum value.

**Time Complexity:** O(n)

**Auxiliary Space:** O(1)

HackerRank: https://www.hackerrank.com/challenges/mini-max-sum/problem

## 02 - Birthday Cake Candles

**Approach:** Find the tallest candle while counting how many times the current maximum occurs. Whenever a larger height is found, reset the count to one. If the same maximum occurs again, increment the count.

**Time Complexity:** O(n)

**Auxiliary Space:** O(1)

HackerRank: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

## 03 - Insertion Sort - Part 1

**Approach:** Treat the final element as the value to insert into an already sorted prefix. Shift every larger element one position to the right and print the array after each shift. Finally, place the value in its correct position.

**Time Complexity:** O(n) worst case

**Auxiliary Space:** O(1)

HackerRank: https://www.hackerrank.com/challenges/insertionsort1/problem

## 04 - Binary Search

**Approach:** Because the array is sorted, compare the target with the middle element. If the target is smaller, search the left half; if larger, search the right half. Continue until the target is found or the search range becomes empty.

**Time Complexity:** O(log n)

**Auxiliary Space:** O(1)

## 05 - Mark and Toys

**Approach:** Sort the toy prices in ascending order and repeatedly purchase the cheapest available toy while the budget allows. This greedy strategy maximizes the number of toys purchased.

**Time Complexity:** O(n log n)

**Auxiliary Space:** O(log n) auxiliary stack space for the standard C++ sorting implementation.

HackerRank: https://www.hackerrank.com/challenges/mark-and-toys/problem

## Learning Outcomes

- Improved problem-solving and algorithmic thinking.
- Practiced arrays, searching, sorting, and greedy techniques.
- Learned to analyze time and space complexity.
- Practiced organizing coding work using GitHub repositories.
- Improved code readability and documentation skills.

## HackerRank Evidence

Add screenshots of accepted submissions for the five mandatory problems here after solving/submitting them on HackerRank.

Recommended evidence:
1. Mini-Max Sum - Accepted
2. Birthday Cake Candles - Accepted
3. Insertion Sort - Part 1 - Accepted
4. Binary Search - Accepted / approved equivalent
5. Mark and Toys - Accepted

## HackerRank Badge Evidence

Add a screenshot of the relevant HackerRank badge or profile achievement here if earned.

## Reflection

Working on these five problems helped me understand how different algorithmic techniques can be selected according to the structure of a problem. Mini-Max Sum and Birthday Cake Candles strengthened my understanding of one-pass array processing and maintaining useful state while scanning data. Insertion Sort - Part 1 helped me understand shifting elements and how insertion-based sorting works internally. Binary Search showed me how using a sorted structure can reduce the search space from linear to logarithmic time. Mark and Toys introduced a greedy approach where sorting and choosing the cheapest available items gives the maximum number of purchases within a fixed budget.

I also learned that writing a correct solution is only one part of programming. An efficient solution should be analyzed for time and space complexity, written clearly, and maintained in a structured repository. Using GitHub for this activity helped me practice organizing source code, documenting solutions, and maintaining a portfolio that can demonstrate my programming progress.

## Conclusion

This repository serves as a record of my algorithmic programming practice for the 3rd-semester CSE coding activity. The solutions are implemented in C++ with emphasis on correctness, efficiency, and clear documentation.
