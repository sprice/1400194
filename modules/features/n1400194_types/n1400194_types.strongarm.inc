<?php
/**
 * @file
 * n1400194_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function n1400194_types_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_beta';
  $strongarm->value = '1';
  $export['ant_beta'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_beta';
  $strongarm->value = '[node:field_alpha] - [node:field_country]';
  $export['ant_pattern_beta'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_alpha';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_alpha'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_beta';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_beta'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_alpha';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_alpha'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_beta';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_beta'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_alpha';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_alpha'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_beta';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_beta'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_alpha';
  $strongarm->value = '1';
  $export['node_preview_alpha'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_beta';
  $strongarm->value = '1';
  $export['node_preview_beta'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_alpha';
  $strongarm->value = 1;
  $export['node_submitted_alpha'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_beta';
  $strongarm->value = 1;
  $export['node_submitted_beta'] = $strongarm;

  return $export;
}
