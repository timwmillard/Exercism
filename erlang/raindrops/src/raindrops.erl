-module(raindrops).

-export([convert/1]).

convert(Number) -> 
    Result1 = if Number rem 3 == 0 -> "Pling"; true -> [] end,
    Result2 = if Number rem 5 == 0 -> Result1 ++ "Plang"; true -> Result1 end,
    Result3 = if Number rem 7 == 0 -> Result2 ++ "Plong"; true -> Result2 end,
    if Result3 == "" -> integer_to_list(Number); true ->Result3 end.

