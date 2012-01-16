A simple Drupal distribution to reproduce [#1400194: Country field tokens are broken](http://drupal.org/node/1400194)

### Installation

1. Copy `distro.make` to development environment.
1. Run `drush make --working-copy distro.make public_html` to build Drupal codebase.
1. Install Drupal using the `n1400194` installation profile.
1. Create a node of type `alpha`.
1. Create a node of type `beta` that references an `alpha` node and has a country.

Expected Result: A new node of type `beta` with a title following the `token.module` pattern `[node:field_alpha] - [node:field_country]`

Actual Result: A new node of type `beta` with a title that includes the pattern `[node:field_alpha] -` and an error as described in the [original issue](http://drupal.org/node/1400194).
