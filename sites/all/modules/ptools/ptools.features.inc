<?php
/**
 * @file
 * ptools.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ptools_node_info() {
  $items = array(
    'pun' => array(
      'name' => t('Pun'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pun_review' => array(
      'name' => t('Pun Review'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
