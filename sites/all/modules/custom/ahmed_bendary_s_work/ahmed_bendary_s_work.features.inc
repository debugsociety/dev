<?php
/**
 * @file
 * ahmed_bendary_s_work.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ahmed_bendary_s_work_node_info() {
  $items = array(
    'housing_wanted' => array(
      'name' => t('Housing Wanted'),
      'base' => 'node_content',
      'description' => t('Housing Wanted posting '),
      'has_title' => '1',
      'title_label' => t('Housing Wanted'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
