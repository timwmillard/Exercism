module SpaceAge (Planet(..), ageOn) where

data Planet = Mercury
            | Venus
            | Earth
            | Mars
            | Jupiter
            | Saturn
            | Uranus
            | Neptune

ageOn :: Planet -> Float -> Float
ageOn planet seconds =
    case planet of
        Mercury -> age / 0.2408467
        Venus -> age /  0.61519726
        Earth -> age / 1.0
        Mars -> age / 1.8808158
        Jupiter -> age / 11.862615
        Saturn -> age / 29.447498
        Uranus -> age / 84.016846
        Neptune -> age / 164.79132
    where age = seconds / 365.25 / 24 / 60 / 60
