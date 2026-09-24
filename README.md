# Job Scheduling with Deadlines Using Greedy Algorithm

## Aim

To implement the Job Scheduling with Deadlines problem using the Greedy Algorithm and maximize the total profit by scheduling jobs within their given deadlines.

## Problem Statement

Given a set of jobs, where each job has a deadline and a profit, schedule the jobs in such a way that:

* Each job takes one unit of time.
* A job must be completed before or on its deadline.
* Only one job can be performed at a time.
* The total profit is maximized.

## Case Study

### College Event Task Scheduling

A college has several tasks to be completed for an upcoming technical event. Each task provides a certain amount of benefit or profit and has a deadline.

Since only one task can be completed at a particular time slot, the event coordinator needs to schedule the tasks in such a way that the maximum total profit is obtained while completing every selected task before its deadline.

The Job Scheduling with Deadlines problem can be used to determine the optimal schedule.

### Example Jobs

| Job | Deadline | Profit |
| --- | -------- | ------ |
| J1  | 2        | 100    |
| J2  | 1        | 19     |
| J3  | 2        | 27     |
| J4  | 1        | 25     |
| J5  | 3        | 15     |

The jobs are selected based on their profit, with the highest-profit jobs considered first.

## Greedy Approach

The Greedy Algorithm selects the job with the highest profit first and assigns it to the latest available time slot before its deadline.

### Steps

1. Sort all jobs in decreasing order of profit.
2. Find the maximum deadline.
3. Create time slots from `1` to the maximum deadline.
4. Consider each job in decreasing order of profit.
5. Find the latest available slot before or on its deadline.
6. If a suitable slot is available, schedule the job.
7. If no slot is available, skip the job.
8. Calculate the total profit of all scheduled jobs.

## Algorithm

1. Read the number of jobs.
2. Read the job ID, deadline, and profit of each job.
3. Sort the jobs in descending order of profit.
4. Find the maximum deadline.
5. Create an array of time slots and initialize them as empty.
6. Traverse the sorted jobs.
7. For each job, start checking from its deadline and move backward.
8. If an empty slot is found, assign the job to that slot.
9. Add the profit of the scheduled job to the total profit.
10. Continue until all jobs are considered.
11. Display the scheduled jobs and maximum total profit.

## Program

The implementation is provided in `job_scheduling.cpp`.

## Sample Input

```text
5
J1 2 100
J2 1 19
J3 2 27
J4 1 25
J5 3 15
```

Where:

* `5` = number of jobs
* Each following line contains:

  * Job ID
  * Deadline
  * Profit

## Sample Output

```text
Jobs sorted by profit:

J1 - Deadline: 2, Profit: 100
J3 - Deadline: 2, Profit: 27
J4 - Deadline: 1, Profit: 25
J2 - Deadline: 1, Profit: 19
J5 - Deadline: 3, Profit: 15

Scheduled Jobs:

Time Slot 1 -> J3
Time Slot 2 -> J1
Time Slot 3 -> J5

Maximum Profit: 142
```

## Complexity Analysis

Let `n` be the number of jobs.

### Time Complexity

* Sorting the jobs: `O(n log n)`
* Finding available slots: `O(n × d)`, where `d` is the maximum deadline.

In the basic implementation, the overall worst-case time complexity is:

**O(n log n + n × d)**

If the maximum deadline is bounded by `n`, this becomes:

**O(n²)**

### Space Complexity

The jobs and time-slot array require:

**O(n)**

## Why Greedy Works

The Greedy approach considers jobs in decreasing order of profit and places each selected job in the latest possible available slot before its deadline.

Placing a job as late as possible leaves earlier time slots available for other jobs with earlier deadlines.

For the standard Job Sequencing with Deadlines problem, this greedy strategy produces a maximum-profit schedule when every job takes one unit of time.

## Technologies Used

* C++
* Data Structures and Algorithms
* Greedy Algorithm

## Key Concepts

* Greedy Algorithm
* Job Scheduling
* Deadlines
* Profit Maximization
* Sorting
* Time Slots
* Optimization
* Time and Space Complexity

## Result

The Job Scheduling with Deadlines problem was successfully implemented using the Greedy Algorithm. Jobs were scheduled according to their profits and deadlines to obtain the maximum possible total profit.
