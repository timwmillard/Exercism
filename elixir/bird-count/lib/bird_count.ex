defmodule BirdCount do
  def today([]) do
    nil
  end

  def today([today | _]) do
    today
  end

  def increment_day_count([]) do
    [1]
  end

  def increment_day_count([today | other]) do
    [today + 1 | other]
  end

  def has_day_without_birds?([]), do: false

  def has_day_without_birds?([day | other]) do
    if day > 0 do
      has_day_without_birds?(other)
    else
      true
    end
  end

  def total([]), do: 0

  def total([day | other]) do
    day + total(other)
  end

  def busy_days([]), do: 0

  def busy_days([day | other]) do
    if day >= 5 do
      1 + busy_days(other)
    else
      busy_days(other)
    end
  end
end
