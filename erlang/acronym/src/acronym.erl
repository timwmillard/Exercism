-module(acronym).

-export([abbreviate/1]).

%| Input                     | Output |
%| ------------------------- | ------ |
%| As Soon As Possible       | ASAP   |
%| Liquid-crystal display    | LCD    |
%| Thank George It's Friday! | TGIF   |

is_break(Letter) -> Letter == $  orelse Letter == $_ orelse Letter == $-.

abbreviate(Phrase) -> abbreviate(Phrase, [], true).

abbreviate([], Abb, _) -> Abb;
abbreviate([Letter | Rest], Abb, New) -> 
    IsBreak = is_break(Letter), 
    if 
        New andalso not IsBreak -> abbreviate(Rest, Abb ++ [string:to_upper(Letter)], false);
        true -> abbreviate(Rest, Abb, IsBreak)
    end.

