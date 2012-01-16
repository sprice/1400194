#!/bin/bash
rm -rf modules 
drush make $1 --working-copy --no-core --contrib-destination=. n1400194.make
git checkout modules
