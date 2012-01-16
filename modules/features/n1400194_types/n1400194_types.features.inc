<?php
/**
 * @file
 * n1400194_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function n1400194_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function n1400194_types_node_info() {
  $items = array(
    'alpha' => array(
      'name' => t('alpha'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'beta' => array(
      'name' => t('beta'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
