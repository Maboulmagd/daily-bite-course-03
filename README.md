# Modern-only C++ course - Homework

This repository contains the homework for Lesson 3.

## 2D Point

Implement two functions `translate_x` and `translate_y` (in file `point/point.cc`) that translate a point (first argument) by the given amount (second argument) on the corresponding axis.

The goal is to have the following commands pass without any errors:

```
bazel test //point/...
bazel test --config=addrsan //point/...
bazel test --config=ubsan //point/...
```

## Palindrome

Implement the function is_palindrome (in file `palindrome/palindrome.cc`).
This function should return `true` if the provided string is a palindrome 
(it reads the same from front and back) and `false` if it isn't.
The check should be case-sensitive and should not skip over special characters.

The goal is to have the following commands pass without any errors:

```
bazel test //palindrome/...
bazel test --config=addrsan //palindrome/...
bazel test --config=ubsan //palindrome/...
```

## Filter circles

Implement a function filter_circles (in file `filter_circles/circles.cc`).
This function should return a `std::vector<Circle>` where the elements of
the vector are those circles that have an area (strictly) larger than the specified threshold.

Use `std::numbers::pi` from the `<numbers>` header.

The goal is to have the following commands pass without any errors:

```
bazel test //filter_circles/...
bazel test --config=addrsan //filter_circles/...
bazel test --config=ubsan //filter_circles/...
```

## Words

Implement a function `to_words` (in file `words/words.cc`) that returns a `std::vector<std::string>` of words that are obtained by splitting the single-line text provided as the argument into words (by space).

The goal is to have the following commands pass without any errors:

```
bazel test //words/...
bazel test --config=addrsan //words/...
bazel test --config=ubsan //words/...
```

## Solutions

If you desire to have a look at the solutions, you can find the commented code in the `solutions` directory.