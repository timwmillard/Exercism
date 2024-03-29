# Bob

Welcome to Bob on Exercism's Haskell Track. If you need help running the tests
or submitting your code, check out `HELP.md`.

## Introduction

Bob is a [lackadaisical][] teenager. He likes to think that he's very cool.
And he definitely doesn't get excited about things. That wouldn't be cool.

When people talk to him, his responses are pretty limited.

[lackadaisical]: https://www.collinsdictionary.com/dictionary/english/lackadaisical

## Instructions

Your task is to determine what Bob will reply to someone when they say
something to him or ask him a question.

Bob only ever answers one of five things:

- **"Sure."** This is his response if you ask him a question, such as "How are
  you?" The convention used for questions is that it ends with a question
  mark.
- **"Whoa, chill out!"** This is his answer if you YELL AT HIM. The convention
  used for yelling is ALL CAPITAL LETTERS.
- **"Calm down, I know what I'm doing!"** This is what he says if you yell a
  question at him.
- **"Fine. Be that way!"** This is how he responds to silence. The convention
  used for silence is nothing, or various combinations of whitespace
  characters.
- **"Whatever."** This is what he answers to anything else.

You need to implement the `responseFor` function that returns Bob's response
for a given input. You can use the provided signature if you are unsure about
    the types, but don't let it restrict your creativity:

```haskell
responseFor :: String -> String
```

To solve this exercise you may read up on:

- [Guards][guards]

[guards]: https://www.futurelearn.com/courses/functional-programming-haskell/0/steps/27226

This exercise works with textual data. For historical reasons, Haskell's
`String` type is synonymous with `[Char]`, a list of characters. For more
efficient handling of textual data, the `Text` type can be used.

As an optional extension to this exercise, you can

- Read about [string types](https://haskell-lang.org/tutorial/string-types) in
  Haskell.
- Add `- text` to your list of dependencies in package.yaml.
- Import `Data.Text` in [the following way](https://hackernoon.com/4-steps-to-a-better-imports-list-in-haskell-43a3d868273c):

    ```haskell
    import qualified Data.Text as T
    import           Data.Text (Text)
    ```

- You can now write e.g. `responseFor :: Text -> Text` and refer to
  `Data.Text` combinators as e.g. `T.isSuffixOf`.
- Look up the documentation for
  [`Data.Text`](https://hackage.haskell.org/package/text/docs/Data-Text.html),
- You can then replace all occurrences of `String` with `Text` in Bob.hs:

    ```haskell
    responseFor :: Text -> Text
    ```

This part is entirely optional.

## Source

### Created by

- @etrepum

### Contributed to by

- @austinlyons
- @cmccandless
- @danbst
- @eijynagai
- @hritchie
- @iHiD
- @jrib
- @Kobata
- @kytrinyx
- @petertseng
- @ppartarr
- @rbasso
- @sshine
- @tejasbubane
- @tofische

### Based on

Inspired by the 'Deaf Grandma' exercise in Chris Pine's Learn to Program
tutorial. - https://pine.fm/LearnToProgram/?Chapter=06
