-module(rna_transcription).

-export([to_rna/1]).


% `G` -> `C`
% `C` -> `G`
% `T` -> `A`
% `A` -> `U`

to_rna(Strand) -> to_rna(Strand, "").

to_rna("", List) -> List;
to_rna([Strand | Rest], List) ->
    NewList = case Strand of
        $G -> List ++ "C";
        $C -> List ++ "G";
        $T -> List ++ "A";
        $A -> List ++ "U"
    end,
    to_rna(Rest, NewList).

