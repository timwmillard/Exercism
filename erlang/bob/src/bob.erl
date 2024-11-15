-module(bob).

-export([response/1]).

%Bob only ever answers one of five things:
%
%- **"Sure."**
%  This is his response if you ask him a question, such as "How are you?"
%  The convention used for questions is that it ends with a question mark.
%- **"Whoa, chill out!"**
%  This is his answer if you YELL AT HIM.
%  The convention used for yelling is ALL CAPITAL LETTERS.
%- **"Calm down, I know what I'm doing!"**
%  This is what he says if you yell a question at him.
%- **"Fine. Be that way!"**
%  This is how he responds to silence.
%  The convention used for silence is nothing, or various combinations of whitespace characters.
%- **"Whatever."**
%  This is what he answers to anything else.

is_whitespace(Char) -> 
    Char == $   orelse
    Char == $\s orelse
    Char == $\t orelse
    Char == $\n orelse
    Char == $\r orelse
    Char == $\v orelse
    Char == $\f.

is_empty(String) -> lists:all(fun is_whitespace/1, String).

all_caps(String) -> 
    lists:all(fun(Char) -> Char < $a orelse Char > $z end, String) andalso
    lists:any(fun(Char) -> Char >= $A andalso Char =< $Z end, String).

response(String) ->
    Trim = case string:trim(String) of
         Trimmed when is_list(Trimmed) -> Trimmed;
         true -> []
    end,
    Question = Trim =/= [] andalso lists:last(Trim) == $?,
    Yelling = all_caps(Trim),
    Silence = is_empty(String),
    if 
        Question andalso Yelling -> "Calm down, I know what I'm doing!";
        Silence -> "Fine. Be that way!"; 
        Question -> "Sure.";
        Yelling -> "Whoa, chill out!";
        true -> "Whatever."
    end.


