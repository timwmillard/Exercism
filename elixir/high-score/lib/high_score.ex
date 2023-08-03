defmodule HighScore do
  def new(), do: Map.new()

  def add_player(scores, name, score) do
    Map.put(scores, name, score)
  end

  def remove_player(scores, name) do
    # Please implement the remove_player/2 function
    Map.delete(scores, name)
  end

  def reset_score(scores, name) do
    # Please implement the reset_score/2 function
    %{scores | [name] => 0}
  end

  def update_score(scores, name, score) do
    # Please implement the update_score/3 function
  end

  def get_players(scores) do
    # Please implement the get_players/1 function
  end
end
