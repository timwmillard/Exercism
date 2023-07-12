defmodule BirdCount do
  def today([]), do: nil

  def today([today | _]), do: today

  def increment_day_count([]), do: [1]

  def increment_day_count([today | other]), do: [today + 1 | other]

  def has_day_without_birds?([]), do: false

  def has_day_without_birds?([0 | _other]), do: true

  def has_day_without_birds?([_day | other]) do
    has_day_without_birds?(other)
  end

  def total([]), do: 0

  def total([day | other]) do
    day + total(other)
  end

  def busy_days([]), do: 0

  def busy_days([day | other]) when day >= 5 do
    1 + busy_days(other)
  end

  def busy_days([_day | other]) do
    busy_days(other)
  end
end
