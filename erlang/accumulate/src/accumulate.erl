-module(accumulate).
-export([accumulate/2, accumulate2/2]).

%%
%% given a fun and a list, apply fun to each list item replacing list item with fun's return value.
%%
%% Solution uses list comprehension
-spec accumulate(fun((A) -> B), list(A)) -> list(B).
accumulate(Fn, List) -> 
    [Fn(X) || X <- List].


% use recuration to accumulate the list
-spec accumulate2(fun((A) -> B), list(A)) -> list(B).
accumulate2(Fn, List) -> 
    accumulate2(Fn, List, []).

accumulate2(_Fn, [], AccList) -> AccList;
accumulate2(Fn, [Head|Rest], AccList) -> 
    X = Fn(Head),
    accumulate2(Fn, Rest, lists:append(AccList, [X])).

