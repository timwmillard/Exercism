-module(rna_transcription).

-export([to_rna/1]).


% `G` -> `C`
% `C` -> `G`
% `T` -> `A`
% `A` -> `U`

to_rna(Strand) -> 
    lists:map(
      fun(S) ->
          case S of
              $G -> $C;
              $C -> $G;
              $T -> $A;
              $A -> $U
          end
      end, Strand).

